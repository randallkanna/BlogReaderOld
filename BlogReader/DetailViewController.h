//
//  DetailViewController.h
//  BlogReader
//
//  Created by Randall Kanna on 11/27/15.
//  Copyright (c) 2015 Randall Kanna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

