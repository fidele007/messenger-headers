/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor, NSArray;

@interface FBReportingFlowDetailedResponsesTableViewCell : UITableViewCell {

	int _presentationStyle;
	unsigned long long _location;
	UIColor* _cornerColor;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int presentationStyle;                    //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIColor * cornerColor;                    //@synthesize cornerColor=_cornerColor - In the implementation block
@property (nonatomic,copy) NSArray * actionButtons;                    //@synthesize actionButtons=_actionButtons - In the implementation block
+(double)heightOfCellWithTitle:(id)arg1 subtitle:(id)arg2 showingActionButtons:(BOOL)arg3 availableTextWidth:(double)arg4 presentationStyle:(int)arg5 ;
-(UIColor *)cornerColor;
-(void)setCornerColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(int)presentationStyle;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
@end

