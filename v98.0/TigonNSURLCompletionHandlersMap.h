/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TigonNSURLCompletionHandlersMap : NSObject {

	NSMutableDictionary* _handlersMap;
	NSString* _identifierPrefix;

}
-(BOOL)canHandleEventsForBackgroundURLSession:(id)arg1 ;
-(void)removeAndInvokeHandlerForIdentifier:(id)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(id)initWithIdentifierPrefix:(id)arg1 ;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

