#! /bin/sh



project="6pm-park-finder"

export EVENT_NOKQUEUE=1

echo "Attempting to build $project for OS X"
# /Applications/Unity/Unity.app/Contents/MacOS/Unity -executeMethod Build.PerformBuild -batchmode -logFile $(pwd)/unity.log -nographics -silent-crashes -quit
# /Applications/Unity/Unity.app/Contents/MacOS/Unity -batchmode -logFile $(pwd)/unity.log -nographics -silent-crashes -projectPath "$/Users/travis/build/ucsb-cs48-w19/6pm-park-finder/${project}" -buildOSXUniversalPlayer "$(pwd)/Build/osx/${project}.app" \ -quit
/Applications/Unity/Unity.app/Contents/MacOS/Unity -batchmode -nographics -silent-crashes -logFile $(pwd)/unity.log -projectPath "/Users/travis/build/ucsb-cs48-w19/6pm-park-finder/6pm-park-finder" -executeMethod Build.PerformBuild -quit
cat $(pwd)/unity.log

echo "Running editor unit tests for park finder"
/Applications/Unity/Unity.app/Contents/MacOS/Unity -batchmode -nographics -silent-crashes -logFile $(pwd)/unity.log -projectPath "/Users/travis/build/ucsb-cs48-w19/6pm-park-finder/6pm-park-finder" -executeMethod Test.TestTest -quit

rc0=$?
echo "Unit test logs"
cat $(pwd)/unity.log
# cat $(pwd)/test.xml
# exit if tests failed
if [ $rc0 -ne 0 ]; then { echo "Failed unit tests"; exit $rc0; } fi
