/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBRangedOptions : NSObject {

	unsigned long long _options;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSRange range;                           //@synthesize range=_range - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(BOOL)intersectsWithOptions:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSRange)range;
-(unsigned long long)options;
@end

