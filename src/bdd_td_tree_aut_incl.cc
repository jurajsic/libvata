/*****************************************************************************
 *  VATA Tree Automata Library
 *
 *  Copyright (c) 2011  Ondra Lengal <ilengal@fit.vutbr.cz>
 *
 *  Description:
 *    Implementation of inclusion on BDD top-down tree automata
 *
 *****************************************************************************/

// VATA headers
#include <vata/vata.hh>
#include <vata/bdd_td_tree_aut.hh>
#include <vata/bdd_td_tree_aut_op.hh>
#include <vata/bdd_td_tree_aut_incl.hh>
#include <vata/down_tree_incl_fctor.hh>
#include <vata/tree_incl_down.hh>

using VATA::BDDTopDownTreeAut;

typedef VATA::AutBase::StateType StateType;


bool VATA::CheckInclusion(
	const BDDTopDownTreeAut&    smaller,
	const BDDTopDownTreeAut&    bigger,
	const VATA::InclParam*      params)
{
	if (nullptr == params)
	{
		return CheckDownwardInclusion(smaller, bigger);
	}
	else
	{	// unsupported stuff
		throw std::runtime_error("Unimplemented");
	}

	return CheckDownwardInclusion(smaller, bigger);
}


bool VATA::CheckDownwardInclusion(
	const BDDTopDownTreeAut&    smaller,
	const BDDTopDownTreeAut&    bigger)
{
	BDDTopDownTreeAut newSmaller = smaller;
	BDDTopDownTreeAut newBigger = bigger;
	StateType states = AutBase::SanitizeAutsForInclusion(newSmaller, newBigger);

	VATA::Util::Identity ident(states);

	return CheckDownwardInclusionWithPreorder(newSmaller, newBigger, ident);
}
