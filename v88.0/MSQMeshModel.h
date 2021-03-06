/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectModel.h>
#import <Messenger/MSQMeshModelExports.h>

@class MSQSurfacesModel, MSQModelUndoablePrimitive, NSString;

@interface MSQMeshModel : MQSceneObjectModel <MSQMeshModelExports> {

	MSQModelUndoablePrimitive* _prefabIdentifierProperty;
	MSQModelUndoablePrimitive* _nodeNameProperty;
	MSQSurfacesModel* _surfaces;

}

@property (nonatomic,copy) NSString * prefabIdentifier; 
@property (nonatomic,copy) NSString * nodeName; 
@property (nonatomic,readonly) MSQSurfacesModel * surfaces;              //@synthesize surfaces=_surfaces - In the implementation block
-(void)parseAttributes:(id)arg1 ;
-(void)restoreChildren;
-(void)mapChildModel:(id)arg1 ;
-(void)setPrefabIdentifier:(NSString *)arg1 ;
-(MSQSurfacesModel *)surfaces;
-(NSString *)prefabIdentifier;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
-(void)setNodeName:(NSString *)arg1 ;
-(NSString *)nodeName;
-(void)addAttributes:(id)arg1 ;
@end

