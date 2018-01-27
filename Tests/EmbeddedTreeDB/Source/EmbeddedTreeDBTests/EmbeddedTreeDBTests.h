/*
    Copyright (c) 2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#ifndef _DIPLODOCUSDB_TEST_TREEDB_EMBEDDEDTREEDBTESTS_EMBEDDEDTREEDBTESTS_H_
#define _DIPLODOCUSDB_TEST_TREEDB_EMBEDDEDTREEDBTESTS_EMBEDDEDTREEDBTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"

using namespace Ishiko::TestFramework;

void AddEmbeddedTreeDBTests(TestHarness& theTestHarness);

TestResult::EOutcome EmbeddedTreeDBCreationTest1();
TestResult::EOutcome EmbeddedTreeDBCreateTest1(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBOpenTest1(Test& test);
TestResult::EOutcome EmbeddedTreeDBOpenTest2(Test& test);
TestResult::EOutcome EmbeddedTreeDBOpenTest3(Test& test);
TestResult::EOutcome EmbeddedTreeDBOpenTest4(Test& test);
TestResult::EOutcome EmbeddedTreeDBNodeInsertTest1(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeInsertBeforeTest1(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeInsertBeforeTest2(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeInsertAfterTest1(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeInsertAfterTest2(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeAppendTest1(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeAppendTest2(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeAppendTest3(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeAppendTest4(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeAppendTest5(FileComparisonTest& test);
TestResult::EOutcome EmbeddedTreeDBNodeRemoveTest1(FileComparisonTest& test);

#endif
