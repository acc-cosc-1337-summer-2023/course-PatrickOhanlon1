#define CATCH_CONFIG_MAIN
#include <iostream>
#include "repetition.h"
#include <catch.hpp>

TEST_CASE("Test get_gc_content")
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
}