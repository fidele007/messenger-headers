/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMediaParallelUploadConfig : FBValueObject <NSCopying> {

	unsigned long long _maxUploadJobsInflight;
	unsigned long long _maxUploadJobsSending;

}

@property (nonatomic,readonly) unsigned long long maxUploadJobsInflight;              //@synthesize maxUploadJobsInflight=_maxUploadJobsInflight - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUploadJobsSending;               //@synthesize maxUploadJobsSending=_maxUploadJobsSending - In the implementation block
-(id)initWithMaxUploadJobsInflight:(unsigned long long)arg1 maxUploadJobsSending:(unsigned long long)arg2 ;
-(unsigned long long)maxUploadJobsInflight;
-(unsigned long long)maxUploadJobsSending;
@end

