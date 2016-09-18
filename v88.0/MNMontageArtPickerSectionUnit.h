/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSticker, FBMemMessengerMontageComposition;

@interface MNMontageArtPickerSectionUnit : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSticker* _sticker_sticker;
	FBMemMessengerMontageComposition* _composition_composition;

}
+(id)stickerWithSticker:(id)arg1 ;
+(id)compositionWithComposition:(id)arg1 ;
-(void)matchSticker:(/*^block*/id)arg1 composition:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
