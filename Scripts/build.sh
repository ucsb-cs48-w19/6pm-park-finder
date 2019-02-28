#! /bin/sh



project="6pm-park-finder"

export EVENT_NOKQUEUE=1

echo "Attempting to build $project for OS X"
# /Applications/Unity/Unity.app/Contents/MacOS/Unity -executeMethod Build.PerformBuild -batchmode -logFile $(pwd)/unity.log -nographics -silent-crashes -quit
/Applications/Unity/Unity.app/Contents/MacOS/Unity -batchmode -logFile $(pwd)/unity.log -nographics -silent-crashes -projectPath "$(pwd)/${project}" -buildOSXUniversalPlayer "$(pwd)/Build/osx/${project}.app" \ -quit

