/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNChainRequest;

@interface MNChainRequestWithSourceIdentifier : FBValueObject <NSCopying> {

	long long _sourceIdentifier;
	MNChainRequest* _chainRequest;

}

@property (nonatomic,readonly) long long sourceIdentifier;                      //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MNChainRequest * chainRequest;              //@synthesize chainRequest=_chainRequest - In the implementation block
-(MNChainRequest *)chainRequest;
-(id)initWithSourceIdentifier:(long long)arg1 chainRequest:(id)arg2 ;
-(long long)sourceIdentifier;
@end
