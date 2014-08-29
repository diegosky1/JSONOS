//
//  DetailViewController.h
//  JSONOS
//
//  Created by Diego Quevedo on 10/10/13.
//  Copyright (c) 2013 Diego Quevedo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * popoulation;
@property (nonatomic, strong) NSString * country;
@property (strong, nonatomic) IBOutlet UILabel *cityName;
@property (strong, nonatomic) IBOutlet UILabel *cityPopulation;
@property (strong, nonatomic) IBOutlet UILabel *cityCountry;

@end
