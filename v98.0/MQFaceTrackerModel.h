/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectModel.h>
#import <Messenger/MQFaceTrackerModelProtocol.h>

@class MSQModelUndoablePrimitive, NSString, MSQModelDocumentContext, NSArray;

@interface MQFaceTrackerModel : MQSceneObjectModel <MQFaceTrackerModelProtocol> {

	MSQModelUndoablePrimitive* _faceIdProperty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
@property (nonatomic,readonly) MSQModelDocumentContext * context; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numChildren; 
@property (nonatomic,copy,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@property (assign,nonatomic) unsigned long long faceId; 
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
@end

