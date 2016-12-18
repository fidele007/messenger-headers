/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSNumber;

@interface FBActionButton : UIButton {

	NSNumber* _verticalMargin;
	NSNumber* _horizontalMargin;

}

@property (nonatomic,copy) NSNumber * verticalMargin;                //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,copy) NSNumber * horizontalMargin;              //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
-(NSNumber *)horizontalMargin;
-(void)setHorizontalMargin:(NSNumber *)arg1 ;
-(double)_innerVerticalPadding;
-(void)layoutSubviews;
-(NSNumber *)verticalMargin;
-(void)setVerticalMargin:(NSNumber *)arg1 ;
@end
