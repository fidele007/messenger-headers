/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDeferredComputation.h>

@class NSString;

@interface FBDeferredFilterComputation : NSObject <FBDeferredComputation> {

	/*^block*/id _filterBlock;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) id filterBlock;                  //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)filterBlock;
-(id)initWithFilterBlock:(/*^block*/id)arg1 ;
-(unsigned long long)type;
@end
