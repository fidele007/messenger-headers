/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(NSString *)logoURLString;
-(void)setLogoURLString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

