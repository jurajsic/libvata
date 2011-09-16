/*****************************************************************************
 *  Vojnar's Army Tree Automata Library
 *
 *  Copyright (c) 2011  Ondra Lengal <ilengal@fit.vutbr.cz>
 *
 *  Description:
 *    Implementation of intersection on BDD bottom-up tree automata.
 *
 *****************************************************************************/

// VATA headers
#include <vata/vata.hh>
#include <vata/bdd_bu_tree_aut_op.hh>

using VATA::AutBase;
using VATA::BDDBottomUpTreeAut;

BDDBottomUpTreeAut VATA::Intersection(const BDDBottomUpTreeAut& lhs,
	const BDDBottomUpTreeAut& rhs, AutBase::ProductTranslMap* pTranslMap)
{
	// Assertions
	assert(lhs.isValid());
	assert(rhs.isValid());



	assert(pTranslMap != nullptr);

	throw std::runtime_error("Unimplemented");
}
