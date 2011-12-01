//
//  indexBar.h
//
//  Created by Craig Merchant on 07/04/2011.
//  Copyright 2011 RaptorApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuartzCore/QuartzCore.h"

@protocol CMIndexBarDelegate;

@interface CMIndexBar : UIView {
	NSObject<CMIndexBarDelegate> *_delegate;
	
	UIColor *_highlightedBackgroundColor;
	UIColor *_textColor;
}

@property (nonatomic, assign) NSObject<CMIndexBarDelegate> *delegate;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIColor *textColor;

- (id)init;
- (id)initWithFrame:(CGRect)frame;
- (void) setIndexes:(NSArray*)indexes;
- (void) clearIndex;

@end

@protocol CMIndexBarDelegate<NSObject>
@optional
- (void)indexSelectionDidChangeForIndexBar:(CMIndexBar *)IndexBar index:(int)index title:(NSString*)title;
@end