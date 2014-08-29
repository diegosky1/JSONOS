//
//  City.m
//  JSONOS
//
//  Created by Diego Quevedo on 07/10/13.
//  Copyright (c) 2013 Diego Quevedo. All rights reserved.
//

#import "City.h"

@implementation City
@synthesize cityID, cityState, cityPopulation, cityCountry, cityName;
-(id) initWithCityID: (NSString *) cID andCityName: (NSString *) cName andCityState: (NSString *) cState andCityPopulation: (NSString *) cPopulation andCityCountry: (NSString *) cCountry
{
    self = [super init];
    if (self)
    {
        cityID = cID;
        cityName = cName;
        cityState = cState;
        cityPopulation = cPopulation;
        cityCountry = cCountry;
    }
    return self;
}

@end
