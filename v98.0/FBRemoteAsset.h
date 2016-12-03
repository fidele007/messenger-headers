/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FBRemoteAsset : FBValueObject <NSCopying> {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGSize size;                   //@synthesize size=_size - In the implementation block
-(id)initWithUrl:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(NSURL *)url;
@end
