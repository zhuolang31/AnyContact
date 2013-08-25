//
//  DetailViewController.h
//  AnyContact
//
//  Created by david zhang on 8/25/13.
//  Copyright (c) 2013 david zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
