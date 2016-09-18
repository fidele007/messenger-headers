/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBlockProviderPerfLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, FBQuickPerformanceLogger, NSString;

@interface FBBlockProviderPerfLogger : NSObject <FBBlockProviderPerfLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _expectedProviders;
	unordered_map<int, unsigned long long, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned long long> > >* _originTimestamps;
	FBQuickPerformanceLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dispatchInstance;
-(id)initWithQueue:(id)arg1 logger:(id)arg2 ;
-(void)expectProvider:(id)arg1 ;
-(void)blockProviderWillGet:(id)arg1 instanceKey:(int)arg2 timestamp:(unsigned long long)arg3 ;
-(void)blockProviderDidGet:(int)arg1 className:(id)arg2 timestamp:(unsigned long long)arg3 ;
@end
