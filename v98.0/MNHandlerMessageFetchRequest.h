/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSpecificMessageQuery, MNModelRequestConfiguration;

@interface MNHandlerMessageFetchRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	MNSpecificMessageQuery* _specificMessageQuery;
	MNModelRequestConfiguration* _configuration;
	unsigned long long _handlerOptions;

}

@property (nonatomic,readonly) unsigned long long requestId;                                    //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNSpecificMessageQuery * specificMessageQuery;              //@synthesize specificMessageQuery=_specificMessageQuery - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerOptions;                               //@synthesize handlerOptions=_handlerOptions - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 specificMessageQuery:(id)arg2 configuration:(id)arg3 handlerOptions:(unsigned long long)arg4 ;
-(MNSpecificMessageQuery *)specificMessageQuery;
-(unsigned long long)handlerOptions;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
@end

