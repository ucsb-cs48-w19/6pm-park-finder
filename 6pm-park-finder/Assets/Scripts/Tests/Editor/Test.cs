using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

public class Test
{
    private static GameObject park;

	[SetUp]
    public void SetUp()
    {
        park = Resources.Load("/Prefabs/Park") as GameObject;
    }

    [UnityTest]
    public IEnumerator Tests_correctSearchObject()
    {
        SearchableObject objectToTest = new SearchableObject(park);

        // Wait for Start Method
        yield return null;
        //
        Assert.AreEqual(objectToTest.searchObject, park);
    }

	public static void TestTest() {
		Test tt = new Test() ;
		tt.SetUp() ;
		tt.Tests_correctSearchObject() ;
	}
}
