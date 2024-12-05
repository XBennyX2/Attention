/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_AFRentCollectionAgentUTest_init = false;
#include "../../../tests/attention/AFRentCollectionAgentUTest.cxxtest"

static AFRentCollectionAgentUTest suite_AFRentCollectionAgentUTest;

static CxxTest::List Tests_AFRentCollectionAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AFRentCollectionAgentUTest( "/home/silence/Documents/again/attention/tests/attention/AFRentCollectionAgentUTest.cxxtest", 48, "AFRentCollectionAgentUTest", suite_AFRentCollectionAgentUTest, Tests_AFRentCollectionAgentUTest );

static class TestDescription_suite_AFRentCollectionAgentUTest_testRentCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testRentCollection() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 83, "testRentCollection" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testRentCollection(); }
} testDescription_suite_AFRentCollectionAgentUTest_testRentCollection;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
