//
//  ViewController.h
//  JSONOS
//
//  Created by Diego Quevedo on 07/10/13.
//  Copyright (c) 2013 Diego Quevedo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "City.h"
#import "DetailViewController.h"

@interface ViewController : UIViewController
<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic,strong) NSMutableArray * json;
@property (nonatomic,strong) NSMutableArray * citiesArray;
@property (strong, nonatomic) IBOutlet UITableView *myTableView;

#pragma mark - Methods
//va a leer los datos de json y va a rellenar los arrays
-(void) retrieveData;

@end
