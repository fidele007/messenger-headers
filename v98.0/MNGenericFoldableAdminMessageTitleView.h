/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, FBRichTextView, NSString;

@interface MNGenericFoldableAdminMessageTitleView : UIView {

	FBNetworkImageView* _logoView;
	FBRichTextView* _textView;
	NSString* _titleString;
	NSString* _logoURLString;

}

@property (nonatomic,copy) NSString * titleString;                //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * logoURLString;              //@synthesize logoURLString=_logoURLString - In the implementation block
+(double)heightThatFitsTitle:(id)arg1 maxWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)setLogoURLString:(NSString *)arg1 ;
-(NSString *)logoURLString;
-(void)layoutSubviews;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
@end

