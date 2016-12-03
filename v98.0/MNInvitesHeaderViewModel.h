/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIImage;

@interface MNInvitesHeaderViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowSkipButtonInSubtitle;
	NSString* _title;
	UIFont* _titleFont;
	NSString* _subtitle;
	UIImage* _image;
	double _imageBottomMargin;
	double _imageTopMargin;

}

@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFont;                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSkipButtonInSubtitle;              //@synthesize shouldShowSkipButtonInSubtitle=_shouldShowSkipButtonInSubtitle - In the implementation block
@property (nonatomic,readonly) double imageBottomMargin;                         //@synthesize imageBottomMargin=_imageBottomMargin - In the implementation block
@property (nonatomic,readonly) double imageTopMargin;                            //@synthesize imageTopMargin=_imageTopMargin - In the implementation block
-(id)initWithTitle:(id)arg1 titleFont:(id)arg2 subtitle:(id)arg3 image:(id)arg4 shouldShowSkipButtonInSubtitle:(BOOL)arg5 imageBottomMargin:(double)arg6 imageTopMargin:(double)arg7 ;
-(BOOL)shouldShowSkipButtonInSubtitle;
-(double)imageTopMargin;
-(double)imageBottomMargin;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)subtitle;
-(UIFont *)titleFont;
@end

