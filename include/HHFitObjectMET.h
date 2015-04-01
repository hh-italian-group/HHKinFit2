/*
 * class for fit objects
 */

#ifndef HHFitObjectMET_
#define HHFitObjectMET_

#include "Rtypes.h"
#include "TLorentzVector.h"
#include "TVector2.h"
#include "TMatrixD.h"
#include "HHFitObject.h"


class HHFitObjectMET : public HHFitObject {
 public:
  HHFitObjectMET(TVector2 const& initialvector,TVector2 const& fitvector=TVector2(0,0));
  
  void setCovMatrix(Double_t xx, Double_t yy, Double_t xy);

  virtual void print() const;
  virtual void printInitial4Vector() const;
  virtual void printFit4Vector() const;
  virtual void printCovMatrix() const;
};

#endif /* HHFitObjectMET_ */
