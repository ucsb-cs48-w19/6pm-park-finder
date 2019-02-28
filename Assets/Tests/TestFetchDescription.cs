using System.Collections;
/*using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;*/
using UnityEngine.Assertions;
///using UnityEngine.Networking;
//using UnityEngine.CoreModule;
//using System.Globalization;
//using SearchBar.cs;


namespace Tests
{
    public class TestFetchDescription
    {

        // A Test behaves as an ordinary method
        [Test]
        public void TestFetchDescriptionSimplePasses()
        {
            // Use the Assert class to test conditions
        }

        // A UnityTest behaves like a coroutine in Play Mode. In Edit Mode you can use
        // `yield return null;` to skip a frame

        [UnityTest]
        public IEnumerator TestFetchDescriptionWithEnumeratorPasses()
        {
           

            // Use the Assert class to test conditions.
            // Use yield to skip a frame.
            //SearchBar OneBar;
            //Vector2d BarLocation = new Vector2d(34.413963, -119.848946);
            double BarLocation = 34.413963;
            OneBar.start();
            //OneBarlocation = OneBar.currentLocation;
            Assert.AreEqual(BarLocation, OneBar.getVector()[0]);
            yield return null;

        }
    }
}
