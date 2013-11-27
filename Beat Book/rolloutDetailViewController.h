//
//  rolloutDetailViewController.h
//  Beat Book
//
//  Created by Fernando Chorney on 11/26/2013.
//  Copyright (c) 2013 Fernando Chorney. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface rolloutDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
