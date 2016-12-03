/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadMessagesGenerator, MNMessageCellLayoutStrategy;
#import <Messenger/Messenger-Structs.h>
@class MNMessagesUpdateStrategy;

@interface MNMessagesViewUpdateGenerator : NSObject {

	id<MNThreadMessagesGenerator> _messageRowGenerator;
	id<MNMessageCellLayoutStrategy> _messageCellLayoutStrategy;
	MNMessagesUpdateStrategy* _messagesUpdateStrategy;

}
-(id)initWithMessageRowGenerator:(id)arg1 messageCellLayoutStrategy:(id)arg2 ;
-(FBValueObjectPair*)generateUpdateForOldViewModel:(id)arg1 oldThreadContextViewModel:(id)arg2 viewModelSource:(id)arg3 maximumNumberOfMessages:(long long)arg4 ;
-(id)generateUpdateAsyncForOldViewModel:(id)arg1 oldThreadContextViewModel:(id)arg2 viewModelSource:(id)arg3 maximumNumberOfMessages:(long long)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

