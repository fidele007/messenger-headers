/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface MNComposerControlExtensionBannerViewModel : FBValueObject <NSCopying> {

	UIColor* _textColor;
	NSString* _localizedText;

}

@property (nonatomic,copy,readonly) UIColor * textColor;                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedText;              //@synthesize localizedText=_localizedText - In the implementation block
-(id)initWithTextColor:(id)arg1 localizedText:(id)arg2 ;
-(UIColor *)textColor;
-(NSString *)localizedText;
@end

