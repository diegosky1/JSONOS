//
//  City.h
//  JSONOS
//
//  Created by Diego Quevedo on 07/10/13.
//  Copyright (c) 2013 Diego Quevedo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface City : NSObject
//Son NSStrings porque son datos que tienen que ser compatibles con los que pasamos con JSON
@property (nonatomic, strong) NSString * cityName;
@property (nonatomic, strong) NSString * cityID;
@property (nonatomic, strong) NSString * cityState;
@property (nonatomic, strong) NSString * cityPopulation;
@property (nonatomic, strong) NSString * cityCountry;

//mETODO QUE NOS DEJA INICIALIZAR LA CLASE
-(id) initWithCityID: (NSString *) cID andCityName: (NSString *) cName andCityState: (NSString *) cState andCityPopulation: (NSString *) cPopulation andCityCountry: (NSString *) cCountry;

@end
