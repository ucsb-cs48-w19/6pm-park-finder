using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

public class Test
{
    private GameObject park;

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
}
