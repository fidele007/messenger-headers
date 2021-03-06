/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMStickerPackDescriptor : NSObject {

	unsigned long long _stickerPackId;
	unsigned long long _stickerId;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long stickerPackId;              //@synthesize stickerPackId=_stickerPackId - In the implementation block
@property (nonatomic,readonly) unsigned long long stickerId;                  //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
-(id)initWithStickerId:(unsigned long long)arg1 ;
-(id)initWithStickerPackId:(unsigned long long)arg1 ;
-(unsigned long long)stickerPackId;
-(unsigned long long)stickerId;
-(id)description;
-(unsigned long long)type;
-(BOOL)isValidDescriptor;
@end

