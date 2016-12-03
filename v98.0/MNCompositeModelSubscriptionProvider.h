/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNModelSubscriptionProvider.h>

@class MNCompositeModelSubscriptionCallbackHandler;

@interface MNCompositeModelSubscriptionProvider : MNModelSubscriptionProvider {

	/*^block*/id _childKeyMapping;
	MNCompositeModelSubscriptionCallbackHandler* _callbackHandler;
	atomic<long long> _currentSubscriptionId;

}
-(id)subscriptionForKey:(id)arg1 ;
-(id)initWithKind:(id)arg1 initialBehavior:(long long)arg2 children:(const vector<std::__1::pair<MNModelSubscriptionProvider *, long>, std::__1::allocator<std::__1::pair<MNModelSubscriptionProvider *, long> > >*)arg3 childKeyMapping:(/*^block*/id)arg4 loader:(id)arg5 backfeeder:(id)arg6 queue:(id)arg7 ;
-(void)invalidateForKey:(id)arg1 ;
@end

