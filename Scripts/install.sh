#! /bin/sh

# BASE_URL=https://netstorage.unity3d.com/unity
# HASH=88d00a7498cd
# VERSION=5.5.1f1
VERSION=2018.3.11
# 2.17
download() {
  file=$1
  # url="$BASE_URL/$HASH/$package"
  url="https://download.unity3d.com/download_unity/88933597c842/MacEditorInstaller/Unity-2018.3.4f1.pkg?_ga=2.168044710.686183865.1550968454-48958660.1547513121"
#url="https://download.unity3d.com/download_unity/bb579dc42f1d/UnityDownloadAssistant.dmg"

  echo "Downloading from $url: "
  curl -o `basename "$package"` "$url"
}


install() {
  package=$1
  download "$package"

  echo "Installing "`basename "$package"`
  sudo installer -dumplog -package `basename "$package"` -target /
}

# See $BASE_URL/$HASH/unity-$VERSION-$PLATFORM.ini for complete list
# of available packages, where PLATFORM is `osx` or `win`

install "MacEditorInstaller/Unity-$VERSION.pkg"
install "MacEditorTargetInstaller/UnitySetup-Windows-Support-for-Editor-$VERSION.pkg"
install "MacEditorTargetInstaller/UnitySetup-Mac-Support-for-Editor-$VERSION.pkg"
install "MacEditorTargetInstaller/UnitySetup-Linux-Support-for-Editor-$VERSION.pkg"
