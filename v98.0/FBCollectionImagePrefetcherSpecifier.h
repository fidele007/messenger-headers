/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBCollectionImagePrefetcherSpecifier : NSObject {

	BOOL _streaming;
	NSURL* _url;
	unsigned long long _desiredImageFlag;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL streaming;                                   //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
-(unsigned long long)desiredImageFlag;
-(id)initWithUrl:(id)arg1 streaming:(BOOL)arg2 desiredImageFlag:(unsigned long long)arg3 ;
-(NSURL *)url;
-(BOOL)streaming;
-(id)uniqueKey;
@end

