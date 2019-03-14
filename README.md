# Park-Finder [![Build Status](https://travis-ci.org/ucsb-cs48-w19/6pm-park-finder.svg?branch=master)](https://travis-ci.org/ucsb-cs48-w19/6pm-park-finder) 

## Project summary

### One-sentence description of the project

Friendly and useful park finder! Helps avid tree-huggers find the perfect park!

### Additional information about the project

Have you ever needed to quickly find a new park? Are you a picky parker? Look no further! Park Finder is a onestop app to find all the parks you ever need. Contains a simple searching feature with a list of all your favorite nearby Currently under development.

## Installation

### Prerequisites

Unity 2018.3.0

Android SDK (if you want to build and deploy to Android)

XCode (if you want to build and deploy to iOS)

### Dependency

None

### Installation Steps

Install Unity 2018.3.0. Make sure to include the iOS and/or Android module when installing. 
If Unity is already installed you may need to download the iOS module through File / Build Settings 
After cloning this repo, open the repo directory on master through Unity. You may develop through the Unity app. 
Double click the Default Scene and press play in the game tab to see the app in action on your computer.

If you want to build to Android, you can download the Android SDK along with Android studio at this link: https://developer.android.com/studio.
Make sure that the path to the SDK is configured correctly. On Mac, the default correct configuration is /Users/<nameOfUser>/Library/Android/sdk and on Windows it's C:\Users\username\AppData\Local\Android\Sdk. 
Then, plug your Android into the computer, select File > Build Settings and make sure Platform is set to Android.
Then, click Build and Run in the Unity Editor, and you can see any development changes on a real Android device (or Build and move the created .apk to an Android device and run it)!

If you want to build to iOS, you can download the latest version XCode here: https://developer.apple.com/xcode/
Note that XCode 10 (the latest version of XCode) can only build to iPhones with iOS 12.0+ and the Mac running the build must have OS 10.13.0+. The app is still executable on iOS 8.0.0+ when using prior versions of XCode.
Make sure you have an Apple Developer account (you can create one here: https://appleid.apple.com/account?appId=632&returnUrl=https%3A%2F%2Fdeveloper.apple.com%2Faccount%2F).
In Unity, File > Build Settings and make sure Platform is set to iOS.
Click Build and Run. Unity will take you to XCode, from which you should click the 'Play' arrow in the top left to build and run. Then, you can see development changes on a real iPhone!

## Functionality
If you want to use our app on an actual iPhone device, you must have at least iOS 8.0.0.

To use our app, first open it up. Then, you will see three buttons on the bottom bar: a magnifying glass (Search), a house (Home), and an i in a circle (Info). You can click the house to go to the Home page, where you'll see a map with parks in IV. That map has other functionality as well (you can type a location in the top right and press enter and it will take you there). You can drag around to see park locations.

Next, click the magnifying glass. You'll see a scrollable view of park names and a search bar (for which search can be ordered by park name, proximity to you, and park rating by clicking the buttons directly below the search field). Select any park and it'll take you to that park's park page. (You can also get to the last park page visited by pressing the Info button.)

On the park page, you will see info pertaining to that particular park. You'll see a map showing the location of the park and a description of the park below that map. You can also rate the park on a scale of 1 to 5! The rating shows up both in the form of stars and as a number out of 5.

And that's our app! We hope you enjoy the functionality.

## Known Problems
Sometimes, the map can take a long time to render as it's being dragged around, which can be frustrating for the user.

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## License

MIT

