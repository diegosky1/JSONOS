//
//  DetailViewController.m
//  JSONOS
//
//  Created by Diego Quevedo on 10/10/13.
//  Copyright (c) 2013 Diego Quevedo. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController
@synthesize name, popoulation, country;
@synthesize cityName, cityPopulation, cityCountry;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title=name;
    
    //set our labels
    cityName.text=name;
    cityPopulation.text=popoulation;
    cityCountry.text=country;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
