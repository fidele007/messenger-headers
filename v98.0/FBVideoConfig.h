/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBVideoConfig : NSObject {

	NSDictionary* _config;
	unsigned _resolution;
	unsigned _bitrate;
	unsigned _framerate;
	NSString* _codec;
	NSString* _profile;

}

@property (nonatomic,copy,readonly) NSString * codec;                //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) NSString * profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned resolution;                  //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,readonly) unsigned bitrate;                     //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) unsigned framerate;                   //@synthesize framerate=_framerate - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)codec;
-(NSString *)profile;
-(unsigned)bitrate;
-(unsigned)framerate;
-(unsigned)resolution;
@end

