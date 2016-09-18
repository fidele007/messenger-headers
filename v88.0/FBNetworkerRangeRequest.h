/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>
#import <Messenger/FBNetworkCDNRequestProtocol.h>

@class NSURL, NSString;

@interface FBNetworkerRangeRequest : FBNetworkerRequest <FBNetworkCDNRequestProtocol> {

	BOOL _enabledCacheStatusQuery;
	unsigned long long _offset;
	unsigned long long _length;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long offset;               //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabledCacheStatusQuery;              //@synthesize enabledCacheStatusQuery=_enabledCacheStatusQuery - In the implementation block
-(id)networkRequest;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(BOOL)enabledCacheStatusQuery;
-(void)setEnabledCacheStatusQuery:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(NSURL *)URL;
-(unsigned long long)offset;
@end
