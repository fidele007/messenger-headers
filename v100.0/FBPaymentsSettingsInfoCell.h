/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSettingsCell.h>

@class UILabel;

@interface FBPaymentsSettingsInfoCell : FBPaymentsSettingsCell {

	UILabel* _substituteTextLabel;
	double _textHeadingSpace;

}

@property (assign,nonatomic) double textHeadingSpace;              //@synthesize textHeadingSpace=_textHeadingSpace - In the implementation block
-(void)setTextHeadingSpace:(double)arg1 ;
-(double)textHeadingSpace;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(id)textLabel;
@end

