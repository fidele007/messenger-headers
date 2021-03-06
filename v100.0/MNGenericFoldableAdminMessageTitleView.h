/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(NSString *)logoURLString;
-(void)setLogoURLString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
@end

