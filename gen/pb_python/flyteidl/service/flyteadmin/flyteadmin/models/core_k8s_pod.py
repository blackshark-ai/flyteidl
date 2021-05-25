# coding: utf-8

"""
    flyteidl/service/admin.proto

    No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)  # noqa: E501

    OpenAPI spec version: version not set
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from flyteadmin.models.core_k8s_object_metadata import CoreK8sObjectMetadata  # noqa: F401,E501
from flyteadmin.models.protobuf_struct import ProtobufStruct  # noqa: F401,E501


class CoreK8sPod(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'metadata': 'CoreK8sObjectMetadata',
        'pod_spec': 'ProtobufStruct'
    }

    attribute_map = {
        'metadata': 'metadata',
        'pod_spec': 'pod_spec'
    }

    def __init__(self, metadata=None, pod_spec=None):  # noqa: E501
        """CoreK8sPod - a model defined in Swagger"""  # noqa: E501

        self._metadata = None
        self._pod_spec = None
        self.discriminator = None

        if metadata is not None:
            self.metadata = metadata
        if pod_spec is not None:
            self.pod_spec = pod_spec

    @property
    def metadata(self):
        """Gets the metadata of this CoreK8sPod.  # noqa: E501

        Contains additional metadata for building a kubernetes pod.  # noqa: E501

        :return: The metadata of this CoreK8sPod.  # noqa: E501
        :rtype: CoreK8sObjectMetadata
        """
        return self._metadata

    @metadata.setter
    def metadata(self, metadata):
        """Sets the metadata of this CoreK8sPod.

        Contains additional metadata for building a kubernetes pod.  # noqa: E501

        :param metadata: The metadata of this CoreK8sPod.  # noqa: E501
        :type: CoreK8sObjectMetadata
        """

        self._metadata = metadata

    @property
    def pod_spec(self):
        """Gets the pod_spec of this CoreK8sPod.  # noqa: E501

        Defines the primary pod spec created when a task is executed.  # noqa: E501

        :return: The pod_spec of this CoreK8sPod.  # noqa: E501
        :rtype: ProtobufStruct
        """
        return self._pod_spec

    @pod_spec.setter
    def pod_spec(self, pod_spec):
        """Sets the pod_spec of this CoreK8sPod.

        Defines the primary pod spec created when a task is executed.  # noqa: E501

        :param pod_spec: The pod_spec of this CoreK8sPod.  # noqa: E501
        :type: ProtobufStruct
        """

        self._pod_spec = pod_spec

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(CoreK8sPod, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, CoreK8sPod):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
