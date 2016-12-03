/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface MNMessageToastViewConfiguration : FBValueObject <NSCopying> {

	UIImage* _backgroundImage;
	UIImage* _arrowImage;
	NSString* _accessibilityHint;
	double _maxWidth;

}

@property (nonatomic,copy,readonly) UIImage * backgroundImage;                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * arrowImage;                      //@synthesize arrowImage=_arrowImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityHint;              //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,readonly) double maxWidth;                                //@synthesize maxWidth=_maxWidth - In the implementation block
-(UIImage *)arrowImage;
-(id)initWithBackgroundImage:(id)arg1 arrowImage:(id)arg2 accessibilityHint:(id)arg3 maxWidth:(double)arg4 ;
-(UIImage *)backgroundImage;
-(double)maxWidth;
-(NSString *)accessibilityHint;
@end

