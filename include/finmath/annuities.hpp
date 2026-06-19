#pragma once

double getDiscountRate(double effRate);

double getDiscountFactor(double effRate, double periodCount);

double PVannuityImm(double payment, double effRate, double periodCount);

double PVannuityDue(double payment, double effRate, int periodCount);

double AVannuityImm(double payment, double effRate, int periodCount);

double AVannuityDue(double payment, double effRate, int periodCount);

double currentValAnnuity(double payment, double effRate, int periodCount);

double defferedAnnuity(double payment, double effRate, int periodCount);

