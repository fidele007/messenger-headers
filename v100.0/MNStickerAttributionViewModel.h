/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNStickerAttributionViewModel : FBValueObject <NSCopying> {

	unsigned long long _stickerId;
	UIColor* _actionButtonColor;

}

@property (nonatomic,readonly) unsigned long long stickerId;                  //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy,readonly) UIColor * actionButtonColor;              //@synthesize actionButtonColor=_actionButtonColor - In the implementation block
-(unsigned long long)stickerId;
-(UIColor *)actionButtonColor;
-(id)initWithStickerId:(unsigned long long)arg1 actionButtonColor:(id)arg2 ;
@end
