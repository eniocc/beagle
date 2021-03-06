/*
 *  Open BEAGLE
 *  Copyright (C) 2001-2007 by Christian Gagne and Marc Parizeau
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact:
 *  Laboratoire de Vision et Systemes Numeriques
 *  Departement de genie electrique et de genie informatique
 *  Universite Laval, Quebec, Canada, G1K 7P4
 *  http://vision.gel.ulaval.ca
 *
 */

/*!
 *  \file   Beagle/FltVec/InitGaussianQROp.hpp
 *  \brief  Definition of the class FltVec::InitGaussianQROp.
 *  \author Christian Gagne
 *  $Revision: 1.5 $
 *  $Date: 2007/08/08 19:26:34 $
 */

#ifndef Beagle_FltVec_InitGaussianQROp_hpp
#define Beagle_FltVec_InitGaussianQROp_hpp

#include <string>

#include "Beagle/Core.hpp"
#include "Beagle/EC.hpp"
#include "Beagle/FltVec/InitGaussianOp.hpp"


namespace Beagle
{

namespace FltVec
{

/*!
 *  \class InitGaussianQROp Beagle/FltVec/InitGaussianQROp.hpp "Beagle/FltVec/InitGaussianQROp.hpp"
 *  \brief Real-valued genotype derandomized Gaussian initialization operator class.
 *  \ingroup FltVecF
 */
class InitGaussianQROp : public FltVec::InitGaussianOp
{

public:

	//! FltVec::InitGaussianQROp allocator type.
	typedef AllocatorT<InitGaussianQROp,FltVec::InitGaussianOp::Alloc>
	Alloc;
	//! FltVec::InitGaussianQROp handle type.
	typedef PointerT<InitGaussianQROp,FltVec::InitGaussianOp::Handle>
	Handle;
	//! FltVec::InitGaussianQROp bag type.
	typedef ContainerT<InitGaussianQROp,FltVec::InitGaussianOp::Bag>
	Bag;

	explicit InitGaussianQROp(unsigned int inFloatVectorSize=0,
	                          std::string inReproProbaName="ec.repro.prob",
	                          std::string inName="FltVec-InitGaussianQROp");
	virtual ~InitGaussianQROp()
	{ }

	virtual void registerParams(System& ioSystem);
	virtual void init(System& ioSystem);
	virtual void initIndividual(Individual& outIndividual, Context& ioContext);

};

}
}

#endif // Beagle_FltVec_InitGaussianQROp_hpp
