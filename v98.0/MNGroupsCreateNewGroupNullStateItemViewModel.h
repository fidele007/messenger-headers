/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, UIColor;

@interface MNGroupsCreateNewGroupNullStateItemViewModel : FBValueObject <NSCopying> {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	NSString* _ctaTitle;
	UIColor* _ctaBackgroundColor;

}

@property (nonatomic,copy,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaTitle;                       //@synthesize ctaTitle=_ctaTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * ctaBackgroundColor;              //@synthesize ctaBackgroundColor=_ctaBackgroundColor - In the implementation block
-(id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ctaTitle:(id)arg4 ctaBackgroundColor:(id)arg5 ;
-(NSString *)ctaTitle;
-(UIColor *)ctaBackgroundColor;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)subtitle;
@end

