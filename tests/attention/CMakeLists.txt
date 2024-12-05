LINK_LIBRARIES (
	attention-types
	attention
	${ATOMSPACE_LIBRARY}
)

ADD_CXXTEST(AFRentCollectionAgentUTest)
ADD_CXXTEST(HebbianUpdatingAgentUTest)
