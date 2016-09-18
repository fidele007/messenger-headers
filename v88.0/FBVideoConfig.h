/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBVideoConfig : NSObject {

	NSDictionary* _config;
	unsigned _resolution;
	unsigned _bitrate;
	NSString* _codec;
	NSString* _profile;

}

@property (nonatomic,copy,readonly) NSString * codec;                //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) NSString * profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned resolution;                  //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,readonly) unsigned bitrate;                     //@synthesize bitrate=_bitrate - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)codec;
-(NSString *)profile;
-(unsigned)bitrate;
-(unsigned)resolution;
@end
