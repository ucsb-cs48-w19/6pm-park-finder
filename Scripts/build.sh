#! /bin/sh

project="6pm-park-finder"

echo "Attempting to build $project for OS X"
/Applications/Unity/Unity.app/Contents/MacOS/Unity -executeMethod Build.PerformBuild -batchmode -logFile $(pwd)/unity.log -nographics -silent-crashes -quit

